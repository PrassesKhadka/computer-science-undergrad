// Using classes,objects,constructors('this' keyword is used to define constructors in JS) and localStorage to implement it
// In Library array objects of 'class Book' will be stored (here we have named it newBook) one by one with every submit click
const add=document.querySelector('#add_icon');
const pop_up_screen=document.querySelector('.pop-up-screen')
const pop_up_tab=document.querySelector('.pop-up-tab')
const outer_box=document.querySelector('.outer-box')
const form=document.getElementsByTagName('form')[0]
const submit=document.querySelector('#submit')

//To generate pop_up 
const open_pop_up=()=>{
    pop_up_screen.classList.remove('hide')
    pop_up_screen.classList.add('show')
}
add.addEventListener('click',open_pop_up)

//To remove pop_up when entered esc,clicked on screen or submit
const close_pop_up=()=>{
    pop_up_screen.classList.remove('show')
    pop_up_screen.classList.add('hide')
}
const cross=document.querySelector('.cross')
cross.addEventListener('click',close_pop_up)



// Data Structure
// Constructor Book
class Book
{
    // parameter suggests the variables(private/public data of the class) of the class
    constructor(title,author,pages)
    {
        this.title=title;
        this.author=author;
        this.pages=pages+' pages';
    }
}
// Array to store the objects of class Book 
// Global variables
// if || not put then with every refresh the Library array will have null array thus data lost
// If nothing in localStorage then will return a null array []
const Library=JSON.parse(localStorage.getItem('Library')) || []
let newBook


// Form submit--->saved to data structure as an object and saved in array Library[]
submit.addEventListener('click',(e)=>{
    e.preventDefault()
    // Each and every filled should be filled before submitting
    if(input.title.value && input.author.value &&input.pages.value)
    {
        close_pop_up()
        // console.log(form.title.value)
        // console.log(form.author.value)
        // console.log(`${form.pages.value} pages`)
        // console.log(form.checkbox.value)
        newBook=new Book(input.title.value,input.author.value,input.pages.value)
        Library.push(newBook)
        saveToLocalStorage(Library)
        renderDataFromLocalStorage()
        // Will reset the form when submit button clicked
        form.reset()
    }
    else
    {
        alert("Fill every section of the form")
    }
})


// Saving the updated array to the localStorage
const saveToLocalStorage=(Library)=>{
    // saves key-value pair but key and value both should be string but here value is array(in js array is also an object) so convert into string
    localStorage.setItem('Library',JSON.stringify(Library))
}

const renderDataFromLocalStorage=()=>{
    
    // Removing all the displayed cards
    const cards=document.querySelectorAll('.cards')
    cards.forEach((element)=>{
        element.remove()
    })
    // Adding the updated cards(#displaying)
    // Values in localStorage is string so converting making it an object/array
    const _localStorage=JSON.parse(localStorage.getItem('Library'))
    console.log(_localStorage)
    _localStorage.forEach((element)=>{
        displayEach(element)
    })
}

// Displaying the data rendered from the localStorage
function displayEach(element){
    // Box for Library cards/display cards
    const library_section=document.querySelector('.Library-section')
    const div=document.createElement('div')
    div.classList.add('cards')
    library_section.append(div)

    const div1=document.createElement('div')
    div1.className='data-title'
    const div2=document.createElement('div')
    div2.className='data-author'
    const div3=document.createElement('div')
    div3.className='data-pages'
    const div4=document.createElement('button')
    div3.id='read'
    const div5=document.createElement('button')
    div3.id='delete'
    div1.textContent=element.title
    div2.textContent=element.author
    div3.textContent=element.pages
    div4.textContent='Read'
    div5.textContent='Delete'
    div.append(div1,div2,div3,div4,div5)
}

// For delete and read functionality
// const read_btn=document.querySelectorAll('#read')
// const delete_btn=document.querySelectorAll('#delete')
// Since button is a 'button' and not div so we cannot use addEventListener
// delete_btn.addEventListener('click',fdelete)
// delete_btn.onclick=fdelete(this)
// function fdelete(this)
// {
//     console.log(this)
// }

// To save yourself from page refresh This function will always run
renderDataFromLocalStorage()








// Your main goal here is to have as little global code as possible 
// Try tucking everything away inside of a module or factory.
// Rule of thumb:if you need ONE of something,use module(for gameboard and display Controller) else if you need multiple of something(eg:players) use factories
// You can try making ronaldo vs messi wala tic tac toe if ronaldo wins suiiiiiii,messi crying gif

// Player,Gameboard,displayController,gameController,checkWinner
// Player and gameController(Play)->As a factory function->need it multiple times for you and bot so
// Gameboard,display->Module pattern->need it Once
// Player->to get the sign(x or o) 
// Gameboard->fills the player's sign in the board array
// 

// A Factory function created
// sign--->'X' OR 'O'
const Player=(sign)=>{
    this.sign=sign
    const getSign=()=>{
        return sign;
    }
    // getSign object returned:['getSign':'x'](or'o') thus key-value pair:object returned
    return {getSign}
}
// Testing
// const you=Player('x')
// console.log(you.getSign())


// Module Pattern created
const gameBoard=(()=>{
    // board Array to store the signs in the tictactoe board
    const board=['','','','','','','','','']
    // Put sign in box->thus in JS in array 'board'
    const putSign_inArray=(index,sign)=>
    {
        board[index]=sign
    }
    const getSign_fromArray=(index)=>
    {
        return board[index]
    }
    const reset_Array=()=>{
        for(let i=0;i<board.length;i++)
            board[i]=''
    }
    return{putSign_inArray,getSign_fromArray,reset_Array}
})()


const display=(()=>{

    // #EventListener:when ever you click the div/box
    const box=document.querySelectorAll('.box')
    const reset_button=document.querySelector('.reset')
    box.forEach((element)=>{
        element.addEventListener('click',(e)=>{
            // only will function until isOver=true
            // only will function when the box is empty if box already contains 'x' or 'o' we will not be able to add
            if(Play.getisOver() || e.target.textContent!='') return
            // Returns data-* attribute's value of each box-div
            console.log(e.target.dataset.index)
            Play.playRound(parseInt(e.target.dataset.index))
            updateGameboard()
        })
    })

    // fills the box in the actuall page rendering from the array 'board'
    const updateGameboard=()=>{
        for(let i=0;i<box.length;i++)
        {
            box[i].textContent=gameBoard.getSign_fromArray(i)
        }
    }

    // For reset button
    reset_button.addEventListener('click',()=>{
        gameBoard.reset_Array()
        Play.reset()
        updateGameboard()
    })


})()


// Main module pattern->Game Logic is here
// Box index bhaneko data-index set in the box
// Index means the board array index
// Here you learn about:.includes,.some,and .every methods in array which returns boolean
const Play=(()=>{
    const you=Player('X')
    // round variable increment after every move
    // round-odd:x gets chance
    // round-even:o gets chance
    const bot=Player('O')
    let round=1
    let isOver=false
    
    const getCurrentPlayerSign=()=>{
        // round-odd:x(you) gets chance
        // round-even:o gets chance
        return round%2===1 ? you.getSign() :bot.getSign()
    }
    
    // Main function:this is called by eventListener whenever you make a move
    // After draw or win isOver=true so when you click any box/div it will not function
    const playRound=(boxIndex)=>{
        gameBoard.putSign_inArray(boxIndex,getCurrentPlayerSign())
        if(checkWinner(boxIndex))
        {
            alert(`${getCurrentPlayerSign()} has won the game`)
            isOver=true
            return
        }
        if(round===9)
        {
            alert('Draw')
            isOver=true
            return
        }
        round++
    }

    const checkWinner=(boxIndex)=>{
        const winConditions = [
            [0, 1, 2],
            [3, 4, 5],
            [6, 7, 8],
            [0, 3, 6],
            [1, 4, 7],
            [2, 5, 8],
            [0, 4, 8],
            [2, 4, 6],
        ];
        // Returns boolean if true then either X or O wins the game 
        return winConditions.filter((element)=>element.includes(boxIndex))
        .some((possibleCombination)=>
            possibleCombination.every((index)=>
                gameBoard.getSign_fromArray(index)===getCurrentPlayerSign()
                )
            )
        
    }
    // returns isOver value for object which triggers play class/factory function
    const getisOver=()=>{
        return isOver
    }
    const reset=()=>{
        round=1
        isOver=false
    }
    // Returns object since a module pattern
    return {playRound,getisOver,reset}
})()









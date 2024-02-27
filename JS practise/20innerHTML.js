//Events and other DOM properties
//innerHTML AND outerHTML

console.log(document.getElementsByTagName("span")[0]);
console.dir(document.getElementsByTagName("span")[0]);

console.log(document.body.firstChild.nodeName);
console.log(document.body.firstChild.tagName);

first.innerHTML="<b><i>hi</i></b>";//Without using doc.getElements..... we can directly access id first but not a good practise
console.log(first.innerHTML);
console.log(first.outerHTML);
first.outerHTML="<button>Hey!!!</button>"

console.log(document.body.firstElementChild);
console.log(document.body.firstChild.data);

console.log(document.body.textContent);

second.hidden=false;
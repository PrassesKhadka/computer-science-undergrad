console.log(first.className);
console.log(first.classList)
first.className="text-blue red";
console.log(first.className);
first.classList.remove("red");
first.classList.add("yellow");
first.classList.toggle("red");
first.classList.toggle("yellow");
console.log(first.classList.toggle("yellow"));
console.log(first.className);
console.log(first.classList);
console.log(first.classList.contains("red"));
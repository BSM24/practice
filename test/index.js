/*let name = [];
let number = 0;
for(let i = 0; i < 2; i++){
    name[i] = prompt("Enter name: ");
    number++;
}
name = name.sort();
console.log(name);
document.getElementById("number").innerHTML = number;
document.getElementById("list").innerHTML = name;*/
function promptfornames(){
    let name = [];
    let number = 0;
    for(let i = 0; i < 10; i++){
        name[i] = prompt("Enter name: ");
        if(name != null){
            number = number +1;
        }
    }
    name = name.sort();
    document.getElementById("number").innerHTML = number;
    
    for(let i = 1; i <= 10; i++){
        let id = "name" + i
        document.getElementById(id).innerHTML = name[i-1];
    }
}
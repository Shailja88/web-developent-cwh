//functions
function print(name,greetText="Greetings from javascript"){
    let name1="Name1"//local variable hai 
    console.log(name+" "+greetText);
} 
function sum(a,b,c){
    let d=a+b+c;
    return (d);
}
// console.log("This is tutorial 53");
// let name="Genie";
// console.log(name +" is a good girl");
let name1="Shailja";
let name2="Genie";
let name3="Kriti";
let name4="Sheelu";
let greetText="Good Morning";

print(name1,greetText);
print(name2,greetText);
print(name3,greetText);
print(name4,greetText);

let returnVal=sum(3,5,6);
console.log(returnVal);
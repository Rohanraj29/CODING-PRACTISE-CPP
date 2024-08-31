let div=document.getElementById("one")
let btn=document.getElementById("two")
document.body.addEventListener("click",function(){
    console.log("Body clicked")
},true)
div.addEventListener("click",function(){
    console.log("Div clicked")
},true)
btn.addEventListener("click",function(){
    console.log("button clicked")
},true)
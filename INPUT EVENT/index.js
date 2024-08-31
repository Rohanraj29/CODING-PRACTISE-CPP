let iput=document.getElementById("one")
iput.addEventListener("focus",function(){
    iput.style.backgroundColor="purple"
})
iput.addEventListener("blur",function(){
    iput.style.backgroundColor="white"
})
iput.addEventListener("check",function(){
    console.log(this.value)
})
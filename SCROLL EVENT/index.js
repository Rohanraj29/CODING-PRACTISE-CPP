//window.addEventListener("scroll",function(){
  //  console.log("Scroll")
//})
window.addEventListener("scroll",function(){
  if(window.pageYOffset>150){
    document.body.style.backgroundColor="purple"
  }
  else{
    document.body.style.backgroundColor="white"
  }

})
let a=["Rahul Raj",19,"Muzaffarpur","Aghoriya Bazar",[7488951233]]
console.log(a[0]) //normal way to access an array element
//let name=a[0];
//let age=a[1];
//let city=a[2];
//console.log(city)
let [name,age,city,town,[contact_number]]=a //extract data from an array and reducing the code line and repetition
console.log(contact_number)
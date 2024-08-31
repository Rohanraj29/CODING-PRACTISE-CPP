let a={
    name:"Rohan Raj",
    age:19,
    city:"Muzaffarpur",
    town:"Aghoriya Bazar"
}
console.log(a.name)
//let age=a.age
//console.log(age)
let {name,age,city,town="Neem chowk"}=a
console.log(town)
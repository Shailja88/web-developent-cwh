// Insert data in mongo db
use geniekart
db.items.insertOne({name:"Samsung 30s",price:22000, rating:4.5, qty:233, sold: 98})

db.items.insertMany([{name:"Samsung 30s",price:22000, rating:4.5, qty:233, sold: 98},{name:"Moto 30s",price:32000, rating:3.5, qty:133, sold: 198},{name:"Realme 30s",price:122000, rating:2.5, qty:233, sold: 98}])

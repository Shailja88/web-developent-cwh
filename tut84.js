show dbs
use geniekart
show collections
db.items.find()


db.anotherCollection.insertOne({a:89})
///updation
db.items.updateOne({name:"Moto 30s"},{$set:{price:2}})

show dbs
use geniekart
show collections

db.items.find({price:22000})

//deleting any items from the mongo database
db.itmes.deletOne({price:22000})
// deleteOne will delete teh matching entry will deletethe first entry in case of multi document match
db.items.deleteMany({price:22000})

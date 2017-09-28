var lucy = require('bindings')('lucy');

var obj = new lucy.IndexSearcher("/Users/ethan/lucy_test/lucy_index");
console.log(obj);
var hit_docs = obj.hits("bear arms");

for(var i = 0; i < hit_docs.length; i++){
  console.log(hit_docs[i].getField("url")+"/" + hit_docs[i].getField("title"));
}
module.exports = lucy
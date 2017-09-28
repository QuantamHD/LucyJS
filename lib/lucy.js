var lucy = require('bindings')('lucy');

var index_searcher = new lucy.IndexSearcher("/Users/ethan/lucy_test/lucy_index");
var hits = index_searcher.hits("This is a test", 0, 10);
console.log(hits.hits_next().getField("url"));


module.exports = lucy
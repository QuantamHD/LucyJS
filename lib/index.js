const lucy = require("bindings")("lucy");

/**
 * @class IndexSearcher
 * @description Use the IndexSearcher class to perform search queries against an index. IndexSearchers operate against a single point-in-time view or Snapshot of the index. If an index is modified, a new IndexSearcher must be opened to access the changes.
 * @example
 * const index_searcher = new lucy.IndexSearcher("path/to/lucy_index");
 * 
 * @param {String} lucy_index is the path to the Lucy Index file
 */
lucy.IndexSearcher = lucy.IndexSearcher;

/**
 * @class Schema
 * @description A Schema is a specification which indicates how other entities should interpret the raw data in an inverted index and interact with it. Once an actual index has been created using a particular Schema, existing field definitions may not be changed. However, it is possible to add new fields during subsequent indexing sessions.
 * @example 
 * const schema = new lucy.Schema();
 */
lucy.Schema = lucy.Schema;

/**
 * @class EasyAnalyzer
 * 
 * EasyAnalyzer is an analyzer chain consisting of a StandardTokenizer, a Normalizer, and a SnowballStemmer.
 * 
 * @example 
 * const easy_analyzer = new lucy.EasyAnalyzer("en"); // new
 * 
 * @example
 * const easy_analyzer = lucy.EasyAnalyzer("en"); // No new
 * 
 * @param {String} lang is the two letter language id to analyze
 */
lucy.EasyAnalyzer = lucy.EasyAnalyzer;

/**
 * @class FullTextType
 * 
 * FullTextType is an implementation of FieldType tuned for “full text search”.
 * Full text fields are associated with an Analyzer, which is used to tokenize and normalize the text so that it can be searched for individual words.
 * For an exact-match, single value field type using character data, see StringType.
 * 
 * @param {EasyAnalyzer} easy_analyzer is the EasyAnalyzer that tokenizes and normalizes the text
 */
lucy.FullTextType = lucy.FullTextType;

module.exports = lucy;

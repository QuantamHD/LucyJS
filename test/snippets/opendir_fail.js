/**
 * This code should throw and error and not fail.
 */

try {
  const lucy = require("../../lib/index.js");
  const index_searcher = new lucy.IndexSearcher("./HAHAHA_I_AM_NOTHING");
} catch (e) {}

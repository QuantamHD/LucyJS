const lucy = require("../lib/index.js");
const path = require("path");
const LUCY_INDEX = path.resolve("./test/res/lucy_index");

describe("hits", () => {
  let index_searcher;
  let hits;

  beforeAll(() => {
    index_searcher = new lucy.IndexSearcher(LUCY_INDEX);
    hits = index_searcher.hits("This is a test", 0, 10);
  });

  it("can get hits from an IndexSearcher", () => {
    expect(hits).toBeDefined();
  });

  it("has a 'hits_next' function defined", () => {
    expect(hits.hits_next).toBeDefined();
  });

  it("can use a 'hits_next' function to get an object", () => {
    expect(hits.hits_next()).toBeDefined();
  });

  it("has a hits_next() object with a getField function", () => {
    expect(hits.hits_next().getField).toBeDefined();
  });

  it("can find a correct field", () => {
    expect(hits.hits_next().getField("url")).toBe("amend18.txt");
  });
});

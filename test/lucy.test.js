const lucy = require("../lib/index.js");
const path = require("path");

const LUCY_INDEX = path.resolve("./test/res/lucy_index");

describe("lucy", () => {
  it("exists", () => {
    expect(lucy).toBeDefined();
  });

  it("has a IndexSearcher method", () => {
    expect(lucy.IndexSearcher).toBeDefined();
  });

  it("can create an IndexSearcher", () => {
    const index_searcher = new lucy.IndexSearcher(LUCY_INDEX);
    expect(index_searcher).toBeDefined();
  });

  it("won't kill the process when an IndexSearcher fails to find a directory", () => {
    expect(() => {
      const index_searcher = new lucy.IndexSearcher("./HAHAHA_I_AM_NOTHING");
    }).toThrowError();
  });
});

const lucy = require("../index.js");

describe("lucy", () => {
  it("exists", () => {
    expect(lucy).toBeDefined();
  });

  it("has a IndexSearcher method", () => {
    expect(lucy.IndexSearcher).toBeDefined();
  });
});

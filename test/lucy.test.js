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

  it("has a Schema method", () => {
    expect(lucy.Schema).toBeDefined();
  });

  it("can create a Schema", () => {
    const schema = new lucy.Schema();
    expect(schema).toBeDefined();
  });

  it("has a EasyAnalyzer method", () => {
    expect(lucy.EasyAnalyzer).toBeDefined();
  });

  it("can create a EasyAnalyzer with new", () => {
    const easy_analyzer = new lucy.EasyAnalyzer("en");
    expect(easy_analyzer).toBeDefined();
  });

  it("can create a EasyAnalyzer without new", () => {
    const easy_analyzer = lucy.EasyAnalyzer("en");
    expect(easy_analyzer).toBeDefined();
  });

  it("has a FullTextType method", () => {
    expect(lucy.FullTextType).toBeDefined();
  });

  it("cannot create a FullTextType with non Analyzer type", () => {
    expect(() => {
      const full_text_type = new lucy.FullTextType(1);
    }).toThrow();
  });

  describe("creating FieldTypes", () => {
    describe("with EasyAnalyzer", () => {
      let easy_analyzer;
      
      beforeAll(() => {
        easy_analyzer = new lucy.EasyAnalyzer("en");
      });
      
      it("can create FullTextType", () =>{
        const full_text_type = new lucy.FullTextType(easy_analyzer);
        expect(full_text_type).toBeDefined();
      });
    });
  })
});

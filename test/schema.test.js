const lucy = require("../lib/index.js");
const path = require("path");
const LUCY_INDEX = path.resolve("./test/res/lucy_index");

describe("schema", () => {
  let index_searcher;
  let schema

  beforeAll(() => {
    index_searcher = new lucy.IndexSearcher(LUCY_INDEX);
    schema = index_searcher.get_schema();
  });

  it("can get the number of fields from the schema", () => {
    expect(schema.num_fields).toBeDefined();
  });

  it("has the correct number of fields defined", () => {
    expect(schema.num_fields).toBe(3);
  });

  it("can get all the field names from schema", () => {
    expect(schema.all_fields).toBeDefined();
  });

  it("has a spec field method", () => {
    expect(schema.specField).toBeDefined();
  });

  it("can spec a field", () => {
    const new_schema = new lucy.Schema();
    const easy_analyzer = new lucy.EasyAnalyzer("en");
    const full_text_type = new lucy.FullTextType(easy_analyzer);
    new_schema.specField("title", full_text_type);
    new_schema.specField("content", full_text_type);
    new_schema.specField("url", full_text_type);
    expect(new_schema.num_fields).toBe(3);
  });

  it("has only the correct field names", () => {
    expect(schema.all_fields).toContain('title');
    expect(schema.all_fields).toContain('url');
    expect(schema.all_fields).toContain('content');
    expect(schema.all_fields.length).toBe(3);    
  });

});

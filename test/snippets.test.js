/**
 * These tests use "snippets" of javascript code that we'll run in a seperate 
 * node process and then check if that process exited with a status code of != 0.
 * 
 * Throwing an error is fine, but killing the process is not.
 */

const { execSync } = require("child_process");

describe("lucy's snippets", () => {
  it("won't kill the process when an IndexSearcher fails to find a directory", () => {
    // Run this in a seperate process
    execSync("node ./test/snippets/opendir_fail.js"); // If this throw's, we've failed.
  });
});

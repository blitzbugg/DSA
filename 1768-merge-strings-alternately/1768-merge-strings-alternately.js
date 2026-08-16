/**
 * @param {string} word1
 * @param {string} word2
 * @return {string}
 */
var mergeAlternately = function(word1, word2) {
   let mergedString = "";
  let shorterLength = Math.min(word1.length, word2.length);

  for (let i = 0; i < shorterLength; i++) {
    mergedString += word1[i] + word2[i];
  }
  mergedString += word1.slice(shorterLength) + word2.slice(shorterLength);

  return mergedString;
};
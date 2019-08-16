
func shortestDistance(_ words:[String], word1 : String, word2 : String) -> Int
{
	var idx1: [Int] = [Int](), idx2 = [Int]()
	var res = Int.max
	for i in 0..<words.count{
		if words[i] == word1{
			idx1.append(i)
		}
		else if words[i] == word2{
			idx2.append(i)
		}
	}
	for i in 0..<idx1.count{
		for j in 0..<idx2.count{
			res = min(res, abs(idx1[i], idx2[j]))
		}
	}
	return res
}
print(shortestDistance(["practice", "makes", "perfect", "coding", "makes"], word1: "makes", make2: "coding"))





func shortestDistance1(_ words: [String], word1: String, word2: String) -> Int {
    var idx1: Int = -1, idx2 = -1
    var res = Int.max
    for i in 0..<words.count {
        if words[i] == word1 { idx1 = i}
        else if words[i] == word2 { idx2 = i}
        if idx1 != -1 && idx2 != -1 {
            res = min(res, abs(idx1 - idx2))
        }
    }
    return res
}
print(shortestDistance1(["practice", "makes", "perfect", "coding", "makes"], word1: "coding", word2: "practice"))


func shortestDistance2(_ words: [String], word1: String, word2: String) -> Int {
    var idx = -1
    var res = Int.max
    for i in 0..<words.count {
        if words[i] == word1 || words[i] == word2 {
            if idx != -1 && words[i] != words[idx] {
                res = min(res, abs(i - idx))
            }
            idx = i
        }
    }
    return res
}
print(shortestDistance2(["practice", "makes", "perfect", "coding", "makes"], word1: "coding", word2: "practice"))
























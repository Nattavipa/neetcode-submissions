func twoSum(nums []int, target int) []int {
    seen := make(map[int]int, len(nums))
    for i,num := range nums{
        diff:= target - num
        index, exists := seen[diff]
        if exists{
            return []int{index,i}
        }
        seen[num]=i
    }
    return nil
}

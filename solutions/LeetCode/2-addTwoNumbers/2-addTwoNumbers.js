/**
 * @param {ListNode} l1
 * @param {ListNode} l2
 * @return {ListNode}
 */

var addTwoNumbers = function (l1, l2) {
  // Solution 1
  // let p1 = l1
  // let p2 = l2
  // let head
  // let carry = 0
  // while (p1 || p2 || carry>0) {
  //     let sum = (p1?.val ?? 0)+(p2?.val ?? 0)+carry
  //     carry = 0
  //     if (sum > 9) {
  //         carry = (sum - (sum % 10))/10
  //         sum %= 10
  //     }
  //     if (!head) {
  //         head = new ListNode(sum, null)
  //     } else {
  //         let current = head
  //         while (current.next !== null) {
  //             current = current.next
  //         }
  //         current.next = new ListNode(sum, null)
  //     }
  //     p1 = p1?.next
  //     p2 = p2?.next
  // }
  // return head

  // Solution 2
  let p1 = l1
  let p2 = l2
  let head
  let current

  let carry = 0
  while (p1 || p2 || carry > 0) {
    let sum = (p1?.val ?? 0) + (p2?.val ?? 0) + carry
    carry = (sum - (sum % 10)) / 10
    sum %= 10

    if (!head) {
      head = new ListNode(sum, null)
      current = head
    } else {
      current.next = new ListNode(sum, null)
      current = current.next
    }
    p1 = p1?.next
    p2 = p2?.next
  }
  return head
};
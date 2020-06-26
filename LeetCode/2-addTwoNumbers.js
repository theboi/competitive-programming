/*
 * 2. Add Two Numbers
 * You are given two non-empty linked lists representing two non-negative
 * integers. The digits are stored in reverse order and each of their nodes
 * contain a single digit. Add the two numbers and return it as a linked list.
 * 
 * You may assume the two numbers do not contain any leading zero, except the 
 * number 0 itself.
 *
 * Example:
 * Input: (2 -> 4 -> 3) + (5 -> 6 -> 4)
 * Output: 7 -> 0 -> 8
 * Explanation: 342 + 465 = 807.
 */

/**
* Definition for singly-linked list.
* function ListNode(val, next) {
*     this.val = (val===undefined ? 0 : val)
*     this.next = (next===undefined ? null : next)
* }
*/

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
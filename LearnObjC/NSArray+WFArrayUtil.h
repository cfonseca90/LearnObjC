//
//  NSArray+WFArrayUtil.h
//  LearnObjC
//
//  Created by Jeffrey Ruberg on 3/1/12.
//  Copyright (c) 2012 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (WFArrayUtil)

/* Perform linear search to find an object in an |NSArray|.
 * Should return the lowest index whose corresponding array value is equal to
 * |anObject|. If none of the objects in the array are equal to |anObject|,
 * returns |NSNotFound|. Should iterate through each element of the array
 * and send |isEqual:| until a correct element is found.
 */
- (NSInteger)indexViaLinearSearch:(id)anObject;

/* Perform binary search to find an |NSNumber|, assuming |self| is a sorted 
 * array of |NSNumber|s. If none of the elements equal |anInteger|, then 
 * returns |NSNotFound|. Should perform standard binary search algorithm and 
 * compare elements with |compare:|.
 */
- (NSInteger)indexViaBinarySearch:(NSInteger)anInteger;

/* Perform selection sort, assuming |self| is an array of |NSNumber|s. 
 * Should compare elements with |compare:|.
 * Should implement something roughly similar to the following pseudo-code:
 * 
 * 
 * // a[0] to a[n-1] is the array to sort
 * int iPos;
 * int iMin;
 * 
 * // advance the position through the entire array
 * // (could do iPos < n-1 because single element is also min element)
 * for (iPos = 0; iPos < n; iPos++) {
 * 
 *   // find the min element in the unsorted a[iPos .. n-1]
 *   // assume the min is the first element
 *   iMin = iPos;
 *   // test against all other elements
 *   for (int i = iPos+1; i < n; i++) {
 *     // if this element is less, then it is the new minimum
 *     if (a[i] < a[iMin]) {
 *       // found new minimum; remember its index
 *       iMin = i;
 *     }
 *   }
 *    
 *   // iMin is the index of the minimum element. Swap it with the current position
 *   if ( iMin != iPos ) {
 *     swap(a, iPos, iMin);
 *   }
 * }
 */
- (void)sortViaSelectionSort;

/* Perform merge sort, assuming |self| is an array of |NSNumber|s. 
 * Should compare elements with |compare:|.
 * Should implement something roughly similar to the following pseudo-code:
 * 
 *
 * // if list size is 1, consider it sorted and return it
 * if length(m) <= 1
 *   return m
 * // else list size is > 1, so split the list into two sublists
 * var list left, right
 * var integer middle = length(m) / 2
 * for each x in m up to middle
 *   add x to left
 * for each x in m after or equal middle
 *   add x to right
 * // recursively call merge_sort() to further split each sublist
 * // until sublist size is 1
 * left = merge_sort(left)
 * right = merge_sort(right)
 * // merge the sublists returned from prior calls to merge_sort()
 * // and return the resulting merged sublist
 * return merge(left, right)
 */
- (void)sortViaMergeSort;

@end

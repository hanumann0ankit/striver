//majority element n/2 waala

//ismei jo element n/2 se zyda baar aayega vo answer hoga

//so moores voting algo
//thought process ye hai ki agar koi elemnt n/2 se zyda hoga toh uska quantity baaki element se zyda hin hoga
//keeping that in mind
//we take a element if the next element is same as the element taken we plus the counter by 1 if not we subract the counter by 1
//the prevaling element can be our majority element
//why can be because of cases like 575777661111
//in this it will take 1 as majority which is not true as there is no majority in this array

//ek aur for loop leke confirm ho lete hai ki vahi hai

function solution($A, $B, $C){
$num_nails = 0;
$if_nail;
for($i = 0; $i < sizeof($A); $i++) { $if_nail[$i] = false; }

//go through all nails
for($i = 0; $i < sizeof($C); $i++) {
  //check each nail to planks
  for($j = 0; $j < sizeof($A); $j++) {
    //check if nail fits into planks
    if($C[$i] >= $A[$j] && $C[$i] <= $B[$j]) {
      //check if nail exists in planks
      for($k = 0; $k < sizeof($if_nail); $k++) {
        if($if_nail[$k] == true) { break; }
        //add nail
        else {
          $num_nails++;
          $if_nail[$k] = true;
        }
      }
    }
  }
}
for($i = 0; $i < sizeof($if_nail); $i++) {
  if($if_nail[$i] == false) { return -1; }
}
return $num_nails;
}

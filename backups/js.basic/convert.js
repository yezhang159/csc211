function InchesToCntimeters(inches)
//Assumes: inches is a distance, meausred in inches 
//returns: the corresoinding distance in centimeters
{
  var cm;
  cm = inches * 2.54;
  return cm;
}

function CentimetersToInches(cm)
//Assumes: cm is a distance, measured in centimeters
//Returns: the corresponding distance in inches '
{
  var inches;
  inches = cm / 2.54;
  return inches;
}
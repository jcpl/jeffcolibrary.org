<?php
$total = 0;
$letters = range ('A', 'Z');
foreach($rows as $id => $row){
  $existing_letters[] = $row->link;
  $urls[$row->link] = $row->url;
  $counts[$row->link] = $row->count;
  $total += $row->count;
}
//add ALL at end
$letters[] = "All";
$existing_letters[] = "All";
$urls['All'] = str_replace(strtolower($row->link), "all", $row->url);
$counts['All'] = $total;

print '<div class="views-summary views-summary-unformatted">';
foreach($letters as $letter){
  if(in_array($letter, $existing_letters)){
    $nav[] = '<span class="result"><a href=' . $urls[$letter] . '>' . $letter . '</a></span>';
  }
  else {
    $nav[] = '<span class="no-result">' . $letter . '</span>';
  }
}
print implode(' | ', $nav);
print '</div>';
?>
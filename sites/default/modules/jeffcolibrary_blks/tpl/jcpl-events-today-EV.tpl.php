<script type="text/javascript" src="http://www.eventkeeper.com/ekfeed/JCPL_EV_events.js"></script>

<script type="text/javascript">
// new variable to handle long event names
var maxNameLength = 25;

// EventKeeper first returns a javascript variable called fString for FeedString
// which tells us what varibles are returned.
// characters in the string can be:
// D : date
// T : time
// N : name
// 1 : keyword 1
// 2 : keyword 2

// EventKeeper has created an javascript array variable called evtArray
// with fields = evt_date, evt_time, evt_name, evt_ID, evt_Key1 and evtKey2

// for this example we write out the data from this array in a table.

// outer table
document.write("<table align='center' bgcolor='#fcf8f5' cellpadding='0' cellspacing='0' width='100%'>");
document.write("<tr><td>");

// inner table with event data
document.write("<table align='center' cellpadding='0' cellspacing='0' width='100%'>");

// loop through the array, creating a table row for each row in the array.
for (i=0; i<evtArray.length; i++)
{
document.write("<tr valign='top'>");

// for demonstration purposes, we check FeedString.
// Since you know what data you've asked for you can hard code the array.
if (FeedString.indexOf("D") != -1)
document.write("<td width='14%' class='small' style='border-bottom:solid #555b53 1px\;padding:2px'>" + evtArray[i][evt_date] + "</td>");

if (FeedString.indexOf("P") != -1)
document.write("<td width='14%' class='small' style='border-bottom:solid #555b53 1px\;padding:4px'>" + evtArray[i][evt_date] + "</td>");

if (FeedString.indexOf("T") != -1)
document.write("<td width='15%' class='small' style='border-bottom:solid #555b53 1px\;padding:4px'>" + evtArray[i][evt_time] + "</td>");

if ((FeedString.indexOf("N") != -1) || (FeedString.indexOf("C") != -1))
{
  {
// handle long event names
var theName = evtArray[i][evt_name];
if (theName.length > maxNameLength)
theName = theName.substring(0,maxNameLength-2) + '...';

// create the hyperlink based on the Event Name and the Event ID

var linkurl = 'http://www.eventkeeper.com/code/events.cfm?curOrg=JCPL';

linkurl += "#" + evtArray[i][evt_id];
var namelink = '<a class="left4a" href="' + linkurl + '" target="_blank" title="';
namelink += evtArray[i][evt_name] + '">' + '<b>' + theName + '</b>' + '</a>';
document.write("<td width='31%' class='small' style='border-bottom:solid #555b53 1px\;padding:4px'>" + namelink + "</td>");
  }
}

if (FeedString.indexOf("1") != -1)
document.write("<td width='30%' class='small' style='border-bottom:solid #555b53 1px\;padding:4px'>" + evtArray[i][evt_key1] + "</td>");

if (FeedString.indexOf("2") != -1)
document.write("<td class='small' style='border-bottom:solid #555b53 1px'>" + evtArray[i][evt_key2] + "</td>");

document.write("</tr>");
  }
document.write("</table></td></tr>");

document.write("<tr><td bgcolor='#fcf8f5' align='left' style='border-bottom:solid #555b53 1px;padding:2px'><a href='http://www.eventkeeper.com/code/events.cfm?curOrg=JCPL&curKey1=Evergreen%20Library' class='left4a'><b>All Evergreen Events</b></a></td></tr>");

// close the table tag
document.write("</table>");
</script>

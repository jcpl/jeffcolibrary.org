<div><style>
.link,
.link a,
.signupframe
{
	color: #226699;
	font-family: Helvetica, Arial, sans-serif;
	font-size: 13px;
	}
	.link,
	.link a {
		text-decoration: none;
		}
	.signupframe {
		border: 0px solid #000000;
		background: #ffffff;
		}
.signupframe .required {
	font-size: 10px;
	}
</style>
<form method="post" action="https://app.icontact.com/icp/signup.php" name="icpsignup" id="icpsignup1615" accept-charset="UTF-8" onsubmit="return verifyRequired1615();" >
<input type="hidden" name="redirect" value="http://www.icontact.com/www/signup/thanks.html">
<input type="hidden" name="errorredirect" value="http://www.icontact.com/www/signup/error.html">

<div id="SignUp">
<table width="260" class="signupframe" border="0" cellspacing="0" cellpadding="5">
	<tr>
      <td valign="top">
        Email<br />
        <input type="text" name="fields_email">
      </td>
    </tr>
<tr>
      <td valign="top">
        First Name<br />
        <input type="text" name="fields_fname">
      </td>
    </tr>
	<tr>
      <td valign="top">
        Last Name<br />
        <input type="text" name="fields_lname">
      </td>
    </tr>
	<tr>
      <td valign="top">
       Business<br />
        <input type="text" name="fields_business">
      </td>
    </tr>
    <input type="hidden" name="listid" value="22584">
    <input type="hidden" name="specialid:22584" value="XLJT">

    <input type="hidden" name="clientid" value="1282908">
    <input type="hidden" name="formid" value="1615">
    <input type="hidden" name="reallistid" value="1">
    <input type="hidden" name="doubleopt" value="0">
    <!--<tr>
      <td> </td>
      <td><span class="required">*</span> = Required Field</td>
    </tr> -->
    <tr>
      
      <td><input type="submit" name="Submit" value="Submit"></td>
    </tr>
    </table>
</div>
</form>
<script type="text/javascript">

var icpForm1615 = document.getElementById('icpsignup1615');

if (document.location.protocol === "https:")

	icpForm1615.action = "https://app.icontact.com/icp/signup.php";
function verifyRequired1615() {
  if (icpForm1615["fields_email"].value == "") {
    icpForm1615["fields_email"].focus();
    alert("The Email field is required.");
    return false;
  }
  if (icpForm1615["fields_fname"].value == "") {
    icpForm1615["fields_fname"].focus();
    alert("The First Name field is required.");
    return false;
  }
  if (icpForm1615["fields_lname"].value == "") {
    icpForm1615["fields_lname"].focus();
    alert("The Last Name field is required.");
    return false;
  }
  if (icpForm1615["fields_business"].value == "") {
    icpForm1615["fields_business"].focus();
    alert("The Business field is required.");
    return false;
  }


return true;
}
</script>
</div>
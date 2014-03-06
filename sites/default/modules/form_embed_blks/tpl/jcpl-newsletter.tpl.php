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
<form method="post" action="https://app.icontact.com/icp/signup.php" name="icpsignup" id="icpsignup2129" accept-charset="UTF-8" onsubmit="return verifyRequired2129();" >
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
    <input type="hidden" name="listid" value="41037">
    <input type="hidden" name="specialid:41037" value="W59K">

    <input type="hidden" name="clientid" value="1282908">
    <input type="hidden" name="formid" value="2129">
    <input type="hidden" name="reallistid" value="1">
    <input type="hidden" name="doubleopt" value="0">
    <!-- <tr>
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

var icpForm2129 = document.getElementById('icpsignup2129');

if (document.location.protocol === "https:")

	icpForm2129.action = "https://app.icontact.com/icp/signup.php";
function verifyRequired2129() {
  if (icpForm2129["fields_email"].value == "") {
    icpForm2129["fields_email"].focus();
    alert("The Email field is required.");
    return false;
  }


return true;
}
</script>
</div>

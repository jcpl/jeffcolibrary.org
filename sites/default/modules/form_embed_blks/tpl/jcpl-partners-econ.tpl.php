<div><style>
.link,
.link a,
.signupframe
{
	color: #226699;
	font-family: Helvetica, Arial, sans-serif;
	font-size: 16px;
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
<form method="post" action="https://app.icontact.com/icp/signup.php" name="icpsignup" id="icpsignup2357" accept-charset="UTF-8" onsubmit="return verifyRequired2357();" >
<input type="hidden" name="redirect" value="http://jeffcolibrary.org/community-partners">
<input type="hidden" name="errorredirect" value="http://www.icontact.com/www/signup/error.html">

<div id="SignUp">
<table width="260" class="signupframe" border="0" cellspacing="0" cellpadding="5">
	<tr>
      <td valign="top">
       Email
        <input type="text" name="fields_email">
      </td>
    </tr>
	<tr>
      <td valign="top">
         First Name
        <input type="text" name="fields_fname">
      </td>
    </tr>
	<tr>
      <td valign="top">
         Last Name
        <input type="text" name="fields_lname">
      </td>
    </tr>
    <input type="hidden" name="listid" value="46832">
    <input type="hidden" name="specialid:46832" value="GFII">

    <input type="hidden" name="clientid" value="1282908">
    <input type="hidden" name="formid" value="2357">
    <input type="hidden" name="reallistid" value="1">
    <input type="hidden" name="doubleopt" value="0">
    <!-- <tr>
      <td> </td>
      <td><span class="required">*</span> = Required Field</td>
    </tr> -->
    <tr>
      <td><input type="submit" name="Submit" value="Submit"></td>
    </tr>
    </table>
</div>
</form>
<script type="text/javascript">

var icpForm2357 = document.getElementById('icpsignup2357');

if (document.location.protocol === "https:")

	icpForm2357.action = "https://app.icontact.com/icp/signup.php";
function verifyRequired2357() {
  if (icpForm2357["fields_email"].value == "") {
    icpForm2357["fields_email"].focus();
    alert("The Email field is required.");
    return false;
  }


return true;
}
</script>
</div>
<div>
<!-- VERSION = $Id$ $Rev: 218360 $ $Date: 2013-09-06 16:34:57 -0700 (Fri, 06 Sep 2013) $ -->

<!-- This is a sample encore passthrough search form and searchEncore() script. The serachEncore script takes the value of the search input and creates
a valid encore search URL, properly encoded.

The script at minimum requires
 1) the form tag has the onsubmit attribute added like so:
    onsubmit="return searchEncore()"

 2) the search input has a unique id added, in teh example and the script the default id value is "encoreSearchInput", but this can be changes to something else in the script by changing the formSearchInputID variable to the new id.
     example:  <input id="encoreSearchInput" type="text"/>

 3) a hidden input with id = "encoreBase" with a value that is the url to the libraray encore server up until the /search path
 example:   <input type="hidden" id="encoreBase" value="http://encore.mylibrary.com/iii/encore/search/"/>
 
 the form sample has placeholders for values that library staff will needs to fill in: 
 
 Element	    Description
 <ENCORE_FQDN>	The fully-qualified domain name for your Encore server.
 
 Optional settings to prdefine a search scope in an optional hidden input with id="encoreSearchScope"
 <Scope_#>	    The facet number
 <Scope Label>	The facet label
 
 Optional settings to prdefine a search scope in an optional hidden input with id="encoreSearchScope"
 <Language_Code> language code  example: spi



-->

<script type="text/javascript">
   function searchEncore(){
        var encoreBaseURLInput,encoreBaseURL, searchInput, scopeInput, searchString, scopeString, locationHref, charRegExString, base64Regex;
       /*base64_encoding_map includes special characters that need to be
        encoded using base64 - these chars are "=","/", "\", "?"
        character : base64 encoded */
        var base64_encoding_map = {"=":"PQ==", "/": "Lw==", "\\":"XA==", "?":"Pw=="};

        var escapeRegExp = function(string) {
            return string.replace(/([.*+?^=!:${}()|\[\]\/\\])/g, "\\$1");
        }
       encoreBaseURLInput = document.getElementById("encoreBase");
       searchInput = document.getElementById("encoreSearchInput");

        if (searchInput && encoreBaseURLInput) {
            encoreBaseURL = encoreBaseURLInput.value;
            searchString = searchInput.value;
            for(var specialChar in base64_encoding_map) {
                charRegExString = escapeRegExp(specialChar);
                base64Regex = new RegExp(charRegExString, "g");
                searchString = searchString.replace(base64Regex, base64_encoding_map[specialChar])
            }
            searchString = encodeURIComponent(searchString);

            scopeInput = document.getElementById('encoreSearchLocation');

            if (scopeInput) {
                scopeString = scopeInput.value;
            }

            if (scopeString) {
                scopeString = encodeURIComponent(scopeString);
                locationHref = encoreBaseURL + "C__S" + searchString + scopeString +  "__Orightresult__U";
            } else {
                locationHref = encoreBaseURL + "C__S" + searchString + "__Orightresult__U";
            }
			
			languageSetting = document.getElementById("encoreLanguage");
			
			if (languageSetting) {
				locationHref = locationHref + "?lang=" + languageSetting.value;
			}
			
            window.location.href = locationHref;
        }
        return false;
    }
</script>

<form action="?" onsubmit="return searchEncore()">
  <div>
	<!-- REQUIRED with id="encoreSearchInput" -->
    <input id="encoreSearchInput" size="36" type="text"/>

    <!-- REQUIRED INPUT with id="encoreBase": <ENCORE_FQDN> fully qualified domain name such as "encore.mylibrary.com" -->
    <input type="hidden" id="encoreBase" value="http://encore.jefferson.lib.co.us/iii/encore/search/" />

    <!-- OPTIONAL search location hidden field to limit to a predefined scope -->
    <!-- <input type="hidden" id="encoreSearchLocation" value="__Lf:facetcollections:<Scope_#>:<Scope_#>:<Scope Label>::" /> -->
	
	<!-- OPTIONAL non-english language setting: <Language_Code> is code such as "spi" for spanish -->
	<!-- <input type="hidden" id="encoreLanguage" value="<Language_Code>" /> -->
    

    <input type="submit" value="Search" />
          </div>
    <a href="http://encore.jefferson.lib.co.us/iii/encore/home?lang=eng&suite=gold&advancedSearch=true">Advanced search</a> &nbsp; | &nbsp; 
	  <a href=\"$base_url/books-movies-music/didnt-find-it\">Didn&#039;t find it?</a>
      </div>
</form>

</div>
/**
 * ProcessMaker API
 * This ProcessMaker I/O API provides access to a BPMN 2.0 compliant workflow engine api that is designed to be used as a microservice to support enterprise cloud applications.  The current Alpha 1.0 version supports most of the descriptive class of the BPMN 2.0 specification.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@processmaker.io
 *
 * NOTE: This class is auto generated by the swagger code generator program.
 * https://github.com/swagger-api/swagger-codegen.git
 * Do not edit the class manually.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */



#include "User_attributes.h"

namespace io {
namespace processmaker {
namespace pmio {
namespace model {

User_attributes::User_attributes()
{
    m_Username = U("");
    m_Password = U("");
    m_Firstname = U("");
    m_Lastname = U("");
    m_Email = U("");
    m_Expires_at = U("");
    m_Expires_atIsSet = false;
    m_Status = U("");
    m_StatusIsSet = false;
    m_Country = U("");
    m_CountryIsSet = false;
    m_City = U("");
    m_CityIsSet = false;
    m_Location = U("");
    m_LocationIsSet = false;
    m_Address = U("");
    m_AddressIsSet = false;
    m_Phone = U("");
    m_PhoneIsSet = false;
    m_Fax = U("");
    m_FaxIsSet = false;
    m_Cellular = U("");
    m_CellularIsSet = false;
    m_Zip_code = U("");
    m_Zip_codeIsSet = false;
    m_Position = U("");
    m_PositionIsSet = false;
    m_Resume = U("");
    m_ResumeIsSet = false;
    m_Birthday_at = U("");
    m_Birthday_atIsSet = false;
    m_Bookmark_start_cases = U("");
    m_Bookmark_start_casesIsSet = false;
    m_Time_zone = U("");
    m_Time_zoneIsSet = false;
    m_Default_lang = U("");
    m_Default_langIsSet = false;
    m_Created_at = U("");
    m_Created_atIsSet = false;
    m_Updated_at = U("");
    m_Updated_atIsSet = false;
    m_ClientsIsSet = false;
    
}

User_attributes::~User_attributes()
{
}

void User_attributes::validate() 
{
    // TODO: implement validation
}

web::json::value User_attributes::toJson() const
{
    web::json::value val = web::json::value::object();
     
	val[U("username")] = ModelBase::toJson(m_Username);
    val[U("password")] = ModelBase::toJson(m_Password);
    val[U("firstname")] = ModelBase::toJson(m_Firstname);
    val[U("lastname")] = ModelBase::toJson(m_Lastname);
    val[U("email")] = ModelBase::toJson(m_Email);
    if(m_Expires_atIsSet)
    {
        val[U("expires_at")] = ModelBase::toJson(m_Expires_at);
    }
    if(m_StatusIsSet)
    {
        val[U("status")] = ModelBase::toJson(m_Status);
    }
    if(m_CountryIsSet)
    {
        val[U("country")] = ModelBase::toJson(m_Country);
    }
    if(m_CityIsSet)
    {
        val[U("city")] = ModelBase::toJson(m_City);
    }
    if(m_LocationIsSet)
    {
        val[U("location")] = ModelBase::toJson(m_Location);
    }
    if(m_AddressIsSet)
    {
        val[U("address")] = ModelBase::toJson(m_Address);
    }
    if(m_PhoneIsSet)
    {
        val[U("phone")] = ModelBase::toJson(m_Phone);
    }
    if(m_FaxIsSet)
    {
        val[U("fax")] = ModelBase::toJson(m_Fax);
    }
    if(m_CellularIsSet)
    {
        val[U("cellular")] = ModelBase::toJson(m_Cellular);
    }
    if(m_Zip_codeIsSet)
    {
        val[U("zip_code")] = ModelBase::toJson(m_Zip_code);
    }
    if(m_PositionIsSet)
    {
        val[U("position")] = ModelBase::toJson(m_Position);
    }
    if(m_ResumeIsSet)
    {
        val[U("resume")] = ModelBase::toJson(m_Resume);
    }
    if(m_Birthday_atIsSet)
    {
        val[U("birthday_at")] = ModelBase::toJson(m_Birthday_at);
    }
    if(m_Bookmark_start_casesIsSet)
    {
        val[U("bookmark_start_cases")] = ModelBase::toJson(m_Bookmark_start_cases);
    }
    if(m_Time_zoneIsSet)
    {
        val[U("time_zone")] = ModelBase::toJson(m_Time_zone);
    }
    if(m_Default_langIsSet)
    {
        val[U("default_lang")] = ModelBase::toJson(m_Default_lang);
    }
    if(m_Created_atIsSet)
    {
        val[U("created_at")] = ModelBase::toJson(m_Created_at);
    }
    if(m_Updated_atIsSet)
    {
        val[U("updated_at")] = ModelBase::toJson(m_Updated_at);
    }
    if(m_ClientsIsSet)
    {
        val[U("clients")] = ModelBase::toJson(m_Clients);
    }
    

    return val;
}

void User_attributes::fromJson(web::json::value& val)
{
    setUsername(ModelBase::stringFromJson(val[U("username")]));
    setPassword(ModelBase::stringFromJson(val[U("password")]));
    setFirstname(ModelBase::stringFromJson(val[U("firstname")]));
    setLastname(ModelBase::stringFromJson(val[U("lastname")]));
    setEmail(ModelBase::stringFromJson(val[U("email")]));
    if(val.has_field(U("expires_at")))
    {
        setExpiresAt(ModelBase::stringFromJson(val[U("expires_at")]));
                
    }
    if(val.has_field(U("status")))
    {
        setStatus(ModelBase::stringFromJson(val[U("status")]));
                
    }
    if(val.has_field(U("country")))
    {
        setCountry(ModelBase::stringFromJson(val[U("country")]));
                
    }
    if(val.has_field(U("city")))
    {
        setCity(ModelBase::stringFromJson(val[U("city")]));
                
    }
    if(val.has_field(U("location")))
    {
        setLocation(ModelBase::stringFromJson(val[U("location")]));
                
    }
    if(val.has_field(U("address")))
    {
        setAddress(ModelBase::stringFromJson(val[U("address")]));
                
    }
    if(val.has_field(U("phone")))
    {
        setPhone(ModelBase::stringFromJson(val[U("phone")]));
                
    }
    if(val.has_field(U("fax")))
    {
        setFax(ModelBase::stringFromJson(val[U("fax")]));
                
    }
    if(val.has_field(U("cellular")))
    {
        setCellular(ModelBase::stringFromJson(val[U("cellular")]));
                
    }
    if(val.has_field(U("zip_code")))
    {
        setZipCode(ModelBase::stringFromJson(val[U("zip_code")]));
                
    }
    if(val.has_field(U("position")))
    {
        setPosition(ModelBase::stringFromJson(val[U("position")]));
                
    }
    if(val.has_field(U("resume")))
    {
        setResume(ModelBase::stringFromJson(val[U("resume")]));
                
    }
    if(val.has_field(U("birthday_at")))
    {
        setBirthdayAt(ModelBase::stringFromJson(val[U("birthday_at")]));
                
    }
    if(val.has_field(U("bookmark_start_cases")))
    {
        setBookmarkStartCases(ModelBase::stringFromJson(val[U("bookmark_start_cases")]));
                
    }
    if(val.has_field(U("time_zone")))
    {
        setTimeZone(ModelBase::stringFromJson(val[U("time_zone")]));
                
    }
    if(val.has_field(U("default_lang")))
    {
        setDefaultLang(ModelBase::stringFromJson(val[U("default_lang")]));
                
    }
    if(val.has_field(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromJson(val[U("created_at")]));
                
    }
    if(val.has_field(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromJson(val[U("updated_at")]));
                
    }
    if(val.has_field(U("clients")))
    {
        setClients(ModelBase::std::vectorFromJson(val[U("clients")]));
    }
    
}

void User_attributes::toMultipart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix) const
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

	multipart->add(ModelBase::toHttpContent(namePrefix + U("username"), m_Username));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("password"), m_Password));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("firstname"), m_Firstname));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("lastname"), m_Lastname));
    multipart->add(ModelBase::toHttpContent(namePrefix + U("email"), m_Email));
    if(m_Expires_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("expires_at"), m_Expires_at));
                
    }
    if(m_StatusIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("status"), m_Status));
                
    }
    if(m_CountryIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("country"), m_Country));
                
    }
    if(m_CityIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("city"), m_City));
                
    }
    if(m_LocationIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("location"), m_Location));
                
    }
    if(m_AddressIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("address"), m_Address));
                
    }
    if(m_PhoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("phone"), m_Phone));
                
    }
    if(m_FaxIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("fax"), m_Fax));
                
    }
    if(m_CellularIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("cellular"), m_Cellular));
                
    }
    if(m_Zip_codeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("zip_code"), m_Zip_code));
                
    }
    if(m_PositionIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("position"), m_Position));
                
    }
    if(m_ResumeIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("resume"), m_Resume));
                
    }
    if(m_Birthday_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("birthday_at"), m_Birthday_at));
                
    }
    if(m_Bookmark_start_casesIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("bookmark_start_cases"), m_Bookmark_start_cases));
                
    }
    if(m_Time_zoneIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("time_zone"), m_Time_zone));
                
    }
    if(m_Default_langIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("default_lang"), m_Default_lang));
                
    }
    if(m_Created_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("created_at"), m_Created_at));
                
    }
    if(m_Updated_atIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("updated_at"), m_Updated_at));
                
    }
    if(m_ClientsIsSet)
    {
        multipart->add(ModelBase::toHttpContent(namePrefix + U("clients"), m_Clients));
    }
    
}

void User_attributes::fromMultiPart(std::shared_ptr<MultipartFormData> multipart, const utility::string_t& prefix)
{
    utility::string_t namePrefix = prefix;
	if(namePrefix.size() > 0 && namePrefix[namePrefix.size() - 1] != U('.'))
	{
		namePrefix += U(".");
	}

    setUsername(ModelBase::stringFromHttpContent(multipart->getContent(U("username"))));
    setPassword(ModelBase::stringFromHttpContent(multipart->getContent(U("password"))));
    setFirstname(ModelBase::stringFromHttpContent(multipart->getContent(U("firstname"))));
    setLastname(ModelBase::stringFromHttpContent(multipart->getContent(U("lastname"))));
    setEmail(ModelBase::stringFromHttpContent(multipart->getContent(U("email"))));
    if(multipart->hasContent(U("expires_at")))
    {
        setExpiresAt(ModelBase::stringFromHttpContent(multipart->getContent(U("expires_at"))));
                
    }
    if(multipart->hasContent(U("status")))
    {
        setStatus(ModelBase::stringFromHttpContent(multipart->getContent(U("status"))));
                
    }
    if(multipart->hasContent(U("country")))
    {
        setCountry(ModelBase::stringFromHttpContent(multipart->getContent(U("country"))));
                
    }
    if(multipart->hasContent(U("city")))
    {
        setCity(ModelBase::stringFromHttpContent(multipart->getContent(U("city"))));
                
    }
    if(multipart->hasContent(U("location")))
    {
        setLocation(ModelBase::stringFromHttpContent(multipart->getContent(U("location"))));
                
    }
    if(multipart->hasContent(U("address")))
    {
        setAddress(ModelBase::stringFromHttpContent(multipart->getContent(U("address"))));
                
    }
    if(multipart->hasContent(U("phone")))
    {
        setPhone(ModelBase::stringFromHttpContent(multipart->getContent(U("phone"))));
                
    }
    if(multipart->hasContent(U("fax")))
    {
        setFax(ModelBase::stringFromHttpContent(multipart->getContent(U("fax"))));
                
    }
    if(multipart->hasContent(U("cellular")))
    {
        setCellular(ModelBase::stringFromHttpContent(multipart->getContent(U("cellular"))));
                
    }
    if(multipart->hasContent(U("zip_code")))
    {
        setZipCode(ModelBase::stringFromHttpContent(multipart->getContent(U("zip_code"))));
                
    }
    if(multipart->hasContent(U("position")))
    {
        setPosition(ModelBase::stringFromHttpContent(multipart->getContent(U("position"))));
                
    }
    if(multipart->hasContent(U("resume")))
    {
        setResume(ModelBase::stringFromHttpContent(multipart->getContent(U("resume"))));
                
    }
    if(multipart->hasContent(U("birthday_at")))
    {
        setBirthdayAt(ModelBase::stringFromHttpContent(multipart->getContent(U("birthday_at"))));
                
    }
    if(multipart->hasContent(U("bookmark_start_cases")))
    {
        setBookmarkStartCases(ModelBase::stringFromHttpContent(multipart->getContent(U("bookmark_start_cases"))));
                
    }
    if(multipart->hasContent(U("time_zone")))
    {
        setTimeZone(ModelBase::stringFromHttpContent(multipart->getContent(U("time_zone"))));
                
    }
    if(multipart->hasContent(U("default_lang")))
    {
        setDefaultLang(ModelBase::stringFromHttpContent(multipart->getContent(U("default_lang"))));
                
    }
    if(multipart->hasContent(U("created_at")))
    {
        setCreatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("created_at"))));
                
    }
    if(multipart->hasContent(U("updated_at")))
    {
        setUpdatedAt(ModelBase::stringFromHttpContent(multipart->getContent(U("updated_at"))));
                
    }
    if(multipart->hasContent(U("clients")))
    {
        setClients(ModelBase::std::vectorFromHttpContent(multipart->getContent(U("clients"))));
    }
    
}
    
   
utility::string_t User_attributes::getUsername() const
{
	return m_Username;
}
void User_attributes::setUsername(utility::string_t value)
{
	m_Username = value;
    
}
utility::string_t User_attributes::getPassword() const
{
	return m_Password;
}
void User_attributes::setPassword(utility::string_t value)
{
	m_Password = value;
    
}
utility::string_t User_attributes::getFirstname() const
{
	return m_Firstname;
}
void User_attributes::setFirstname(utility::string_t value)
{
	m_Firstname = value;
    
}
utility::string_t User_attributes::getLastname() const
{
	return m_Lastname;
}
void User_attributes::setLastname(utility::string_t value)
{
	m_Lastname = value;
    
}
utility::string_t User_attributes::getEmail() const
{
	return m_Email;
}
void User_attributes::setEmail(utility::string_t value)
{
	m_Email = value;
    
}
utility::string_t User_attributes::getExpiresAt() const
{
	return m_Expires_at;
}
void User_attributes::setExpiresAt(utility::string_t value)
{
	m_Expires_at = value;
    m_Expires_atIsSet = true;
}
bool User_attributes::expires_atIsSet() const
{
    return m_Expires_atIsSet;
}
void User_attributes::unsetExpires_at() 
{
    m_Expires_atIsSet = false;
}
utility::string_t User_attributes::getStatus() const
{
	return m_Status;
}
void User_attributes::setStatus(utility::string_t value)
{
	m_Status = value;
    m_StatusIsSet = true;
}
bool User_attributes::statusIsSet() const
{
    return m_StatusIsSet;
}
void User_attributes::unsetStatus() 
{
    m_StatusIsSet = false;
}
utility::string_t User_attributes::getCountry() const
{
	return m_Country;
}
void User_attributes::setCountry(utility::string_t value)
{
	m_Country = value;
    m_CountryIsSet = true;
}
bool User_attributes::countryIsSet() const
{
    return m_CountryIsSet;
}
void User_attributes::unsetCountry() 
{
    m_CountryIsSet = false;
}
utility::string_t User_attributes::getCity() const
{
	return m_City;
}
void User_attributes::setCity(utility::string_t value)
{
	m_City = value;
    m_CityIsSet = true;
}
bool User_attributes::cityIsSet() const
{
    return m_CityIsSet;
}
void User_attributes::unsetCity() 
{
    m_CityIsSet = false;
}
utility::string_t User_attributes::getLocation() const
{
	return m_Location;
}
void User_attributes::setLocation(utility::string_t value)
{
	m_Location = value;
    m_LocationIsSet = true;
}
bool User_attributes::locationIsSet() const
{
    return m_LocationIsSet;
}
void User_attributes::unsetLocation() 
{
    m_LocationIsSet = false;
}
utility::string_t User_attributes::getAddress() const
{
	return m_Address;
}
void User_attributes::setAddress(utility::string_t value)
{
	m_Address = value;
    m_AddressIsSet = true;
}
bool User_attributes::addressIsSet() const
{
    return m_AddressIsSet;
}
void User_attributes::unsetAddress() 
{
    m_AddressIsSet = false;
}
utility::string_t User_attributes::getPhone() const
{
	return m_Phone;
}
void User_attributes::setPhone(utility::string_t value)
{
	m_Phone = value;
    m_PhoneIsSet = true;
}
bool User_attributes::phoneIsSet() const
{
    return m_PhoneIsSet;
}
void User_attributes::unsetPhone() 
{
    m_PhoneIsSet = false;
}
utility::string_t User_attributes::getFax() const
{
	return m_Fax;
}
void User_attributes::setFax(utility::string_t value)
{
	m_Fax = value;
    m_FaxIsSet = true;
}
bool User_attributes::faxIsSet() const
{
    return m_FaxIsSet;
}
void User_attributes::unsetFax() 
{
    m_FaxIsSet = false;
}
utility::string_t User_attributes::getCellular() const
{
	return m_Cellular;
}
void User_attributes::setCellular(utility::string_t value)
{
	m_Cellular = value;
    m_CellularIsSet = true;
}
bool User_attributes::cellularIsSet() const
{
    return m_CellularIsSet;
}
void User_attributes::unsetCellular() 
{
    m_CellularIsSet = false;
}
utility::string_t User_attributes::getZipCode() const
{
	return m_Zip_code;
}
void User_attributes::setZipCode(utility::string_t value)
{
	m_Zip_code = value;
    m_Zip_codeIsSet = true;
}
bool User_attributes::zip_codeIsSet() const
{
    return m_Zip_codeIsSet;
}
void User_attributes::unsetZip_code() 
{
    m_Zip_codeIsSet = false;
}
utility::string_t User_attributes::getPosition() const
{
	return m_Position;
}
void User_attributes::setPosition(utility::string_t value)
{
	m_Position = value;
    m_PositionIsSet = true;
}
bool User_attributes::positionIsSet() const
{
    return m_PositionIsSet;
}
void User_attributes::unsetPosition() 
{
    m_PositionIsSet = false;
}
utility::string_t User_attributes::getResume() const
{
	return m_Resume;
}
void User_attributes::setResume(utility::string_t value)
{
	m_Resume = value;
    m_ResumeIsSet = true;
}
bool User_attributes::resumeIsSet() const
{
    return m_ResumeIsSet;
}
void User_attributes::unsetResume() 
{
    m_ResumeIsSet = false;
}
utility::string_t User_attributes::getBirthdayAt() const
{
	return m_Birthday_at;
}
void User_attributes::setBirthdayAt(utility::string_t value)
{
	m_Birthday_at = value;
    m_Birthday_atIsSet = true;
}
bool User_attributes::birthday_atIsSet() const
{
    return m_Birthday_atIsSet;
}
void User_attributes::unsetBirthday_at() 
{
    m_Birthday_atIsSet = false;
}
utility::string_t User_attributes::getBookmarkStartCases() const
{
	return m_Bookmark_start_cases;
}
void User_attributes::setBookmarkStartCases(utility::string_t value)
{
	m_Bookmark_start_cases = value;
    m_Bookmark_start_casesIsSet = true;
}
bool User_attributes::bookmark_start_casesIsSet() const
{
    return m_Bookmark_start_casesIsSet;
}
void User_attributes::unsetBookmark_start_cases() 
{
    m_Bookmark_start_casesIsSet = false;
}
utility::string_t User_attributes::getTimeZone() const
{
	return m_Time_zone;
}
void User_attributes::setTimeZone(utility::string_t value)
{
	m_Time_zone = value;
    m_Time_zoneIsSet = true;
}
bool User_attributes::time_zoneIsSet() const
{
    return m_Time_zoneIsSet;
}
void User_attributes::unsetTime_zone() 
{
    m_Time_zoneIsSet = false;
}
utility::string_t User_attributes::getDefaultLang() const
{
	return m_Default_lang;
}
void User_attributes::setDefaultLang(utility::string_t value)
{
	m_Default_lang = value;
    m_Default_langIsSet = true;
}
bool User_attributes::default_langIsSet() const
{
    return m_Default_langIsSet;
}
void User_attributes::unsetDefault_lang() 
{
    m_Default_langIsSet = false;
}
utility::string_t User_attributes::getCreatedAt() const
{
	return m_Created_at;
}
void User_attributes::setCreatedAt(utility::string_t value)
{
	m_Created_at = value;
    m_Created_atIsSet = true;
}
bool User_attributes::created_atIsSet() const
{
    return m_Created_atIsSet;
}
void User_attributes::unsetCreated_at() 
{
    m_Created_atIsSet = false;
}
utility::string_t User_attributes::getUpdatedAt() const
{
	return m_Updated_at;
}
void User_attributes::setUpdatedAt(utility::string_t value)
{
	m_Updated_at = value;
    m_Updated_atIsSet = true;
}
bool User_attributes::updated_atIsSet() const
{
    return m_Updated_atIsSet;
}
void User_attributes::unsetUpdated_at() 
{
    m_Updated_atIsSet = false;
}
std::vector<int32_t>& User_attributes::getClients()
{
	return m_Clients;
}
bool User_attributes::clientsIsSet() const
{
    return m_ClientsIsSet;
}
void User_attributes::unsetClients() 
{
    m_ClientsIsSet = false;
}

}
}
}
}


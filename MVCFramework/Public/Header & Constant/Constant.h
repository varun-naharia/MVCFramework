

#ifndef MVCFramework_Constant_h
#define MVCFramework_Constant_h

//=========================================================================================
/* CREATE ALL CONSTANT FOR APP */
//=========================================================================================


#define APP_NAME  @"MVCFramework"

#define IS_IPHONE_4S        [[UIScreen mainScreen] bounds].size.height == 480
#define IS_IPHONE_5         [[UIScreen mainScreen] bounds].size.height == 568
#define IS_IPHONE_6         [[UIScreen mainScreen] bounds].size.height == 667
#define IS_IPHONE_6_PLUS    [[UIScreen mainScreen] bounds].size.height == 736

#define DeviceHeight   [UIScreen mainScreen].bounds.size.height
#define DeviceWidth    [UIScreen mainScreen].bounds.size.width
#define IOS7VERSION ([[[UIDevice currentDevice] systemVersion] floatValue]>=7.0?YES:NO)


#define SYSTEM_VERSION_EQUAL_TO(v)                  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedSame)
#define SYSTEM_VERSION_GREATER_THAN(v)              ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedDescending)
#define SYSTEM_VERSION_GREATER_THAN_OR_EQUAL_TO(v)  ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN(v)                 ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] == NSOrderedAscending)
#define SYSTEM_VERSION_LESS_THAN_OR_EQUAL_TO(v)     ([[[UIDevice currentDevice] systemVersion] compare:v options:NSNumericSearch] != NSOrderedDescending)

#define RGBCOLOR(r, g, b)       [UIColor colorWithRed:(r)/255.0f green:(g)/255.0f blue:(b)/255.0f alpha:1]
#define RGBA(r, g, b, a) [UIColor colorWithRed:(float)r / 255.0f green:(float)g / 255.0f blue:(float)b / 255.0f alpha:a]
#define UIColorFromRGB(rgbValue) [UIColor colorWithRed:((float)((rgbValue & 0xFF0000) >> 16))/255.0 green:((float)((rgbValue & 0xFF00) >> 8))/255.0 blue:((float)(rgbValue & 0xFF))/255.0 alpha:1.0]


#define REGEX_USER_NAME_LIMIT @"^.{3,10}$"
#define REGEX_USER_NAME @"[A-Za-z0-9]{3,10}"
#define REGEX_EMAIL @"[A-Z0-9a-z._%+-]{3,}+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}"
#define REGEX_PASSWORD_LIMIT @"^.{6,20}$"
#define REGEX_PASSWORD @"[A-Za-z0-9]{6,20}"
#define REGEX_PHONE_DEFAULT @"[0-9]{3}\\-[0-9]{3}\\-[0-9]{4}"

#define ProductImageCellWeight 320

#define ScrollViewHeigth 200.0

#define MSG_FIRSTNAME @"Enter Firstname."
#define MSG_LASTNAME  @"Enter Lastname."
#define MSG_EMAIL     @"Please enter a valid email address.(sam@domain.com)"
#define MSG_PASSWORD  @"Please enter 6 or more characters. Leading or trailing spaces will be ignored."
#define MSG_CONFIRM_PASSWORD @"Please make sure your passwords match."

#define MSG_FIELD_NULL @"Required"
#define MSG_EMAIL_NULL @"This is a required field."
#define MSG_PASSWORD_NULL @"This is a required field."
#define MSG_FIRSTNAME_NULL @"This is a required field."
#define MSG_LASTNAME_NULL  @"This is a required field."
#define MSG_CONFIRM_PASSWORD_NULL @"This is a required field."
#define MSG_POSTCODE_NULL @"Please enter a zip code."

#define MSG_EMAIL_PLACEHOLDER @"user@mail.com"
#define MSG_PASS_PLACEHOLDER @"Password"
#define MSG_RETYPE_PASS_PLACEHOLDER @"Re-type Password"
#define MSG_FIRSTNAME_PLACEHOLDER @"First Name"
#define MSG_LAST_NAME_PLACEHOLDER @"Last Name"
#define MSG_PHONE @"Enter Phone Number"
#define MSG_COUNTRY_PLACEHOLDER @"Country"
#define MSG_BIRTHDAY_PLACEHOLDER @"Birthday"
#define MSG_GENDER_PLACEHOLDER @"Gender"
#define MSG_MONTHLY_PLACEHOLDER @"Monthly Income"
#define MSG_ZIP_PLACEHOLDER @"Zip"
#define MSG_CITY_PLACEHOLDER @"City"
#define MSG_STATE_PLACEHOLDER @"State/Province"
#define MSG_PHONENUMBER_PLACEHOLDER  @"Phone Number"


#define MSG_ADDRESS1_REQUIRED_PLACEHOLDER @"Address Line 1"
#define MSG_ADDRESS2_OPTIONAL_PLACEHOLDER @"Address Line 2(Optional)"
#define MSG_POSTALCODE_PLACEHOLDER @"Postal Code"

#define MSG_OLDPASS_PLACEHOLDER @"Old Password"
#define MSG_NEWPASS_PLACEHOLDER @"New Password"
#define MSG_CONFIRMPASS_PLACEHOLDER @"Confirm New Password"


#define MSG_OLDPASS_NULL @"Invalid current password"
#define MSG_NEWPASS_NULL @"New password field cannot be empty"
#define MSG_CONFNEWPASS_NULL  @"the confirmation is not the new password"

#define MSG_CITY_NULL @"Please enter a city"
#define MSG_ZIP_NULL  @"Please enter a zip code."



//define font
#define font10 [UIFont systemFontOfSize:10.0];
#define font12 [UIFont systemFontOfSize:12.0];
#define font13 [UIFont systemFontOfSize:13.0];
#define font14 [UIFont systemFontOfSize:14.0];
#define font15 [UIFont systemFontOfSize:15.0];
#define font16 [UIFont systemFontOfSize:16.0];
#define font17 [UIFont systemFontOfSize:17.0];
#define font18 [UIFont systemFontOfSize:18.0];
#define font24 [UIFont systemFontOfSize:24.0];
#define font12Bold [UIFont fontWithName:@"Helvetica-Bold" size:12.0];
#define font13Bold [UIFont fontWithName:@"Helvetica-Bold" size:13.0];
#define font14Bold [UIFont fontWithName:@"Helvetica-Bold" size:14.0];
#define font15Bold [UIFont fontWithName:@"Helvetica-Bold" size:15.0];
#define font17Bold [UIFont fontWithName:@"Helvetica-Bold" size:17.0];
#define font18Bold [UIFont fontWithName:@"Helvetica-Bold" size:18.0];
#define APPEngine  [IMEngine shareEngine]



#define PNGIMAGE(NAME)          [UIImage imageWithContentsOfFile:[[NSBundle mainBundle] pathForResource:(NAME) ofType:@"png"]]

#define HIDEKEYBOARD @"HIDEKEYBOARD"


//icons
#define LOGO_ICON @"logo.png"


#endif

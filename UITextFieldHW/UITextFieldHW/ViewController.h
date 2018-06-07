//
//  ViewController.h
//  UITextFieldHW
//
//  Created by Ivan Kozaderov on 18.05.2018.
//  Copyright © 2018 n1ke71. All rights reserved.
//

typedef enum {
    
    RegistrationFieldFirstName,
    RegistrationFieldLastName,
    RegistrationFieldLogin,
    RegistrationFieldPassword,
    RegistrationFieldAge,
    RegistrationFieldPhoneNumber,
    RegistrationFieldEmail,
    
}RegistrationField;

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController <UITextFieldDelegate>

@property(assign,nonatomic) RegistrationField currentRegistrationField;

@property (strong, nonatomic) IBOutletCollection(UITextField) NSArray *registrationFields;

@property (strong, nonatomic) IBOutletCollection(UILabel) NSArray *registrationLabels;

- (IBAction)actionRegField:(UITextField *)sender;

@property(assign,nonatomic) BOOL symbolAtAdded;

@end


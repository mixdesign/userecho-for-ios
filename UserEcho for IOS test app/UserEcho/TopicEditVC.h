//
//  TopicEditVC.h
//  UserEcho for IOS test app
//
//  Created by Sergey Stukov on 7/24/13.
//  Copyright (c) 2013 UserEcho. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TopicEditVC : UITableViewController <UITextFieldDelegate, UIActionSheetDelegate>
{
    IBOutlet UITextField* topicHeader;
    IBOutlet UITextView* topicDescription;
    
    IBOutlet UILabel* topicDescriptionPlaceholder;
    
    IBOutlet UILabel* topicType;
    //IBOutlet UIButton* btnSaveTopic;
    
    IBOutlet UITableView* topicEditTV;
    
}

@end

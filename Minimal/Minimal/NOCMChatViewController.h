//
//  NOCMChatViewController.h
//  NoChat-Example
//
//  Created by little2s on 2016/12/25.
//  Copyright © 2016年 little2s. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <NoChat/NoChat.h>
#import "NOCMMessageCell.h"
#import "NOCMChatInputView.h"

@interface NOCMChatViewController : NOCChatViewController <NOCMChatInputViewDelegate, NOCMTextMessageCellDelegate>

@end

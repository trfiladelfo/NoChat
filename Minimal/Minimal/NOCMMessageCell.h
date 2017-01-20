//
//  NOCMMessageCell.h
//  NoChat-Example
//
//  Created by little2s on 2016/12/25.
//  Copyright © 2016年 little2s. All rights reserved.
//

#import <NoChat/NoChat.h>
#import "NOCMMessageCellLayout.h"
#import "NOCMTextLabel.h"

@class NOCMMessageCell;

@interface NOCMMessageHeadView : UIView

@property (nonatomic, strong) UILabel *senderDisplayNameLabel;
@property (nonatomic, strong) UILabel *dateLabel;

@end

@interface NOCMMessageContentView : UIView

@property (nonatomic, weak) NOCMMessageCell *cell;

- (void)setLayout:(id<NOCMMessageContentViewLayout>)layout;

@end

@interface NOCMMessageView : UIView

@property (nonatomic, strong) NOCMMessageCellLayout *layout;
@property (nonatomic, weak) NOCMMessageCell *cell;

@property (nonatomic, strong) NOCMMessageHeadView *headView;
@property (nonatomic, strong) NOCMMessageContentView *contentView;

- (instancetype)initWithCell:(NOCMMessageCell *)cell;

@end

@interface NOCMMessageCell : NOCChatItemCell

@property (nonatomic, strong) NOCMMessageView *messageView;

+ (Class)messageContentViewClass;

@end

// Text Message
@interface NOCMTextMessageContentView : NOCMMessageContentView

@property (nonatomic, strong) NOCMTextLabel *textLabel;

@end

@interface NOCMTextMessageCell : NOCMMessageCell

@end

@protocol NOCMTextMessageCellDelegate <NOCChatItemCellDelegate>

@optional
- (void)cell:(NOCMTextMessageCell *)cell didTapLink:(NSURL *)linkURL;
- (void)cell:(NOCMTextMessageCell *)cell didLongPressLink:(NSURL *)linkURL;

@end

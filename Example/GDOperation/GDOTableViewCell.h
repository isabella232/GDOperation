//
//  GDOTableViewCell.h
//  GDOperation
//
//  Created by Larry Tin on 2016/12/10.
//  Copyright © 2016年 Larry Tin. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GDOPBDelta;

@interface GDOTableViewCell : UITableViewCell

- (void)applyPatch:(GDOPBDelta *)delta;

@end

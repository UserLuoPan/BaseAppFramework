//
//  BaseTableViewCell.h
//  AnyApp
//
//  Created by 罗盼 on 2017/10/17.
//  Copyright © 2017年 咖达. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "BaseTableViewCellProtocol.h"

@interface BaseTableViewCell : UITableViewCell<BaseTableViewCellProtocol>

@property (nonatomic, weak) UITableView *tableView;

/**
 *  快速创建一个不是从xib中加载的tableview cell
 */
+ (instancetype)cellWithTableView:(UITableView *)tableView;

/**
 *  快速创建一个从xib中加载的tableview cell
 */
+ (instancetype)nibCellWithTableView:(UITableView *)tableView;

@end

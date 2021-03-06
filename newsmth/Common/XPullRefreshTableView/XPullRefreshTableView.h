//
//  XPullRefreshTableView.h
//  newsmth
//
//  Created by Maxwin on 13-5-29.
//  Copyright (c) 2013年 nju. All rights reserved.
//

#import <UIKit/UIKit.h>

@class XPullRefreshTableView;

@protocol XPullRefreshTableViewDelegate <NSObject>
- (void)tableViewDoRefresh:(XPullRefreshTableView *)tableView;
@optional
- (void)tableViewDoRetry:(XPullRefreshTableView *)tableView;
- (void)tableViewDoLoadMore:(XPullRefreshTableView *)tableView;
@end

@interface XPullRefreshTableView : UITableView
@property (weak, nonatomic) id<XPullRefreshTableViewDelegate> xdelegate;
@property (strong, nonatomic) NSDate *lastUpdated;
@property (assign, nonatomic) BOOL enablePullLoad;

- (void)beginRefreshing;
- (void)endRefreshing:(BOOL)success;
- (void)beginLoadMore;

- (void)setLoadMoreShow;
- (void)setLoadMoreHide;
- (void)setLoadMoreFail;

@end

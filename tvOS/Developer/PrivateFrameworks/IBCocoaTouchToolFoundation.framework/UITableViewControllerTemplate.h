//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IBCocoaTouchToolFoundation/UIViewControllerTemplate.h>

@class UIRefreshControl, UITableView, UITableViewDataSource;

@interface UITableViewControllerTemplate : UIViewControllerTemplate
{
    _Bool _clearsSelectionOnViewWillAppear;
    UIRefreshControl *_refreshControl;
    UITableViewDataSource *_staticDataSource;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITableViewDataSource *staticDataSource; // @synthesize staticDataSource=_staticDataSource;
@property(retain, nonatomic) UIRefreshControl *refreshControl; // @synthesize refreshControl=_refreshControl;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(readonly, nonatomic) UITableView *tableView;
- (void)encodeWithCoder:(id)arg1;

@end


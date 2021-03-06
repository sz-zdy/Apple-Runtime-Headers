//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PassKitUI/UITableViewDataSource-Protocol.h>
#import <PassKitUI/UITableViewDelegate-Protocol.h>
#import <PassKitUI/_PKUIKVisibilityBackdropViewDelegate-Protocol.h>

@class NSIndexPath, NSString, PKPaymentSetupDockView, UILabel, UITableView, UITableViewController, UIView, _PKUIKVisibilityBackdropView;

@interface PKPaymentSetupTableViewController : UIViewController <_PKUIKVisibilityBackdropViewDelegate, UITableViewDataSource, UITableViewDelegate>
{
    UITableView *_tableView;
    UILabel *_footerLabel;
    UITableViewController *_tableViewController;
    UIView *_containerView;
    int _style;
    PKPaymentSetupDockView *_dockView;
    _PKUIKVisibilityBackdropView *_backdropView;
    float _backdropWeight;
    _Bool _clearsSelectionOnViewWillAppear;
    int _context;
    NSIndexPath *_selectedIndexPath;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSIndexPath *selectedIndexPath; // @synthesize selectedIndexPath=_selectedIndexPath;
@property(nonatomic) _Bool clearsSelectionOnViewWillAppear; // @synthesize clearsSelectionOnViewWillAppear=_clearsSelectionOnViewWillAppear;
@property(readonly, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) int context; // @synthesize context=_context;
- (int)visibilityBackdropView:(id)arg1 preferredStyleForTraitCollection:(id)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableViewDidFinishReload:(id)arg1;
@property(readonly, nonatomic) UILabel *footerLabel;
@property(readonly, nonatomic) PKPaymentSetupDockView *dockView;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (unsigned int)edgesForExtendedLayout;
- (_Bool)extendedLayoutIncludesOpaqueBars;
- (void)loadView;
- (void)dealloc;
- (id)initWithStyle:(int)arg1 context:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end


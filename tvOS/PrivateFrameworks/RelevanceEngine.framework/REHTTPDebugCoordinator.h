//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class RETrainingSimulator;

@interface REHTTPDebugCoordinator : NSObject
{
    RETrainingSimulator *_simulator;
}

- (void).cxx_destruct;
- (id)_createTableWithItems:(id)arg1 itemFormatBlock:(CDUnknownBlockType)arg2 valueBlock:(CDUnknownBlockType)arg3;
- (id)_createHTMLTableFromDictionary:(id)arg1;
- (id)_createHTMLTableRowFromArray:(id)arg1 itemElementTag:(id)arg2;
- (id)_createContentItemWithTitle:(id)arg1 content:(id)arg2;
- (void)generateDiagnosticsForPaths:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_stringElementForObject:(id)arg1;
- (id)_stringForObject:(id)arg1;
- (id)_linkToPaths:(id)arg1;
- (id)_linkElementForTableItem:(id)arg1 paths:(id)arg2;
- (id)_urlFromPaths:(id)arg1;
- (id)initWithSimulator:(id)arg1;

@end


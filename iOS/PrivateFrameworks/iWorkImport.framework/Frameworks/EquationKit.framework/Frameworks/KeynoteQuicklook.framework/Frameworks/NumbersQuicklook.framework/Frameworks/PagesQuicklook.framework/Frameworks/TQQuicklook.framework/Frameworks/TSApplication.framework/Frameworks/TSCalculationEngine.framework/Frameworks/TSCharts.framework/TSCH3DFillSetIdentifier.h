//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSCH3DFillSetIdentifier : NSObject
{
    NSString *_textureSetID;
    int _seriesIndex;
    int _fillPropertyType;
}

+     // Error parsing type: @32@0:8r^{DEPRECATEDChart3DFillArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{FillArchive}^{Chart3DLightingModelArchive}iI}16@24, name: instanceWithDEPRECATEDArchive:unarchiver:
+     // Error parsing type: @32@0:8r^{Chart3DFillArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Chart3DLightingModelArchive}iI}16@24, name: instanceWithArchive:unarchiver:
+ (id)identifierWithContentsOfDictionary:(id)arg1;
+ (id)identifierWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;
+ (id)identifierWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *textureSetID; // @synthesize textureSetID=_textureSetID;
- (void)didInitFromSOS;
- (id)mipmapTextureSetFilename;
- (id)lowResTextureSetFilename;
@property(readonly, nonatomic) NSString *textureSetFilename;
- (_Bool)isOnDemandResource;
- (_Bool)isStoredInLocalBundle;
- (id)mipmapOnDemandResourceTag;
- (id)textureOnDemandResourceTag;
- (id)mipmapLocalDirectoryPath;
- (id)lowResLocalDirectoryPath;
- (id)localDirectoryPath;
- (void)setSeriesIndex:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned long long seriesIndex;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;
-     // Error parsing type: v32@0:8^{Chart3DFillArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Chart3DLightingModelArchive}iI}16@24, name: saveToArchive:archiver:
-     // Error parsing type: @32@0:8r^{Chart3DFillArchive=^^?{InternalMetadataWithArena=^v}{HasBits<1>=[1I]}{CachedSize={atomic<int>={__cxx_atomic_impl<int, std::__1::__cxx_atomic_base_impl<int> >=Ai}}}{ArenaStringPtr=^{basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> >}}^{Chart3DLightingModelArchive}iI}16@24, name: initWithArchive:unarchiver:
- (unsigned long long)countOfSeriesInFillSet;
- (id)loadPropertiesDictionary;
- (_Bool)isSageCompatible;
- (id)p_version;
- (id)p_getPlist;
- (id)p_loadPlist;
- (id)p_plistData;
- (id)p_plistPath;
- (id)p_sageFillSetList;
- (unsigned long long)seriesIndexFromSageSeriesName:(id)arg1;
- (id)sageSeriesName;
- (id)p_sageSeriesNames;
- (int)fillPropertyTypeFromName:(id)arg1;
- (id)sageFillName;
- (id)p_sageFillPropertyNames;
- (id)dictionaryRepresentation;
- (id)initWithContentsOfDictionary:(id)arg1;
- (id)initWithFillPropertyType:(int)arg1 seriesIndex:(unsigned long long)arg2 textureSetID:(id)arg3;
- (id)initWithFillName:(id)arg1 seriesName:(id)arg2 textureSetID:(id)arg3;

@end


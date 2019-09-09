//
//  ConfigSelectionWindowController.h
//  Celestia
//
//  Created by 李林峰 on 2019/9/8.
//

#import <Cocoa/Cocoa.h>

extern NSString *const configFilePathPrefKey;
extern NSString *const dataDirPathPrefKey;

@interface ConfigSelectionWindowController : NSWindowController {
@public
    NSURL *configFilePath;
    NSURL *dataDirPath;
@private
    BOOL mandatory;
    IBOutlet NSPathControl *configFilePathControl;
    IBOutlet NSPathControl *dataDirPathControl;
    IBOutlet NSButton *cancelButton;
}

+ (NSURL *)applicationConfig;
+ (NSURL *)applicationDataDirectory;
- (void)setMandatory:(BOOL)isMandatory;

@end

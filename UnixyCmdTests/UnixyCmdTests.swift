//
//  UnixyCmdTests.swift
//  UnixyCmdTests
//
//  Created by hnw on 2016/07/09.
//  Copyright © 2016年 hnw. All rights reserved.
//

import XCTest
@testable import UnixyCmd

class UnixyCmdTests: XCTestCase {
    
    override func setUp() {
        super.setUp()
        // Put setup code here. This method is called before the invocation of each test method in the class.
    }
    
    override func tearDown() {
        // Put teardown code here. This method is called after the invocation of each test method in the class.
        super.tearDown()
    }
    
    func testExample() {
        let cmd = UnixyCmd(["ping", "-c", "4", "8.8.8.8"])
        cmd.exec()
        print("cout=\(cmd.cout)")
        print("cerr=\(cmd.cerr)")
        print("retval=\(cmd.retval)")

        XCTAssert(true)
    }
}

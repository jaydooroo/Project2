cmake_minimum_required(VERSION 3.16)
project(Project1_Starter_Code)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(Project1_Starter_Code
        Automaton.h
        ColonAutomaton.cpp
        ColonAutomaton.h
        ColonDashAutomaton.cpp
        ColonDashAutomaton.h
        Lexer.cpp
        Lexer.h
        main.cpp
        Token.cpp
        Token.h
        StringAutomaton.cpp
        StringAutomaton.h
        PeriodAutomaton.cpp
        PeriodAutomaton.h
        FactsAutomaton.cpp
        FactsAutomaton.h
        SchemesAutomaton.cpp
        SchemesAutomaton.h
        QueriesAutomaton.cpp
        QueriesAutomaton.h
        Q_MarkAutomaton.cpp
        Q_MarkAutomaton.h
        AddAutomaton.cpp
        AddAutomaton.h
        MultiplyAutomaton.cpp
        MultiplyAutomaton.h
        LeftParenAutomaton.cpp
        LeftParenAutomaton.h
        RightParenAutomaton.h
        RightParenAutomaton.cpp
        RulesAutomaton.cpp
        RulesAutomaton.h
        UndefinedAutomaton.cpp
        UndefinedAutomaton.h
        IDAutomaton.cpp
        IDAutomaton.h
        CommaAutomaton.cpp
        CommaAutomaton.h
        CommentAutomaton.cpp
        CommentAutomaton.h
        EOFAutomaton.cpp
        EOFAutomaton.h
        Parser.cpp
        Parser.h
        )
